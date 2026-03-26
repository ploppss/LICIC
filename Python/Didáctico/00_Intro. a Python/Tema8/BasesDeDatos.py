import sqlite3

class Persona:
    def __init__(self, nombre, edad, profesion):
        self.nombre = nombre
        self.edad = edad
        self.profesion = profesion
        
class Empleado(Persona):
    def __init__(self, nombre, edad, profesion, sueldo):
        super().__init__(nombre, edad, profesion)
        self.sueldo = sueldo

    def guardar_en_db(self):
        """Método para persistir el objeto actual en una base de datos SQL."""
        try:
            # 1. Conexión
            conexion = sqlite3.connect("empresa.db")
            cursor = conexion.cursor()

            # 2. Crear tabla si no existe (Definición de esquema)
            cursor.execute("""
                CREATE TABLE IF NOT EXISTS empleados (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    nombre TEXT,
                    edad INTEGER,
                    profesion TEXT,
                    sueldo REAL
                )
            """)

            # 3. Inserción de datos (Usamos ? para evitar SQL Injection)
            datos = (self.nombre, self.edad, self.profesion, self.sueldo)
            cursor.execute("""
                INSERT INTO empleados (nombre, edad, profesion, sueldo) 
                VALUES (?, ?, ?, ?)
            """, datos)

            # 4. Confirmar y cerrar
            conexion.commit()
            print(f"✅ {self.nombre} guardado exitosamente en la base de datos.")
            
        except sqlite3.Error as e:
            print(f"❌ Error de base de datos: {e}")
        finally:
            if conexion:
                conexion.close()