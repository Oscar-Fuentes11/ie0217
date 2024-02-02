import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

class Prestamo:
    """
    ¡Gestor de Préstamos 
    Esta clase maneja   calcular tu plan de amortización, 
    incluyendo cuánto de cada pago va hacia el interés y cuánto al principal.
    """

    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        """
        Constructor del gestor de préstamos: donde todo comienza basicamente.
       
        """
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()  # ¡Calculando desde el inicio!

    def calcular_amortizacion(self):
        """
         Calcula tu plan de amortización.
        Desglosa cada pago entre interés y principal.
        """
        try:
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual) ** -self.cuotas)

            saldo_restante = self.monto_prestamo
            amortizacion = []
            for cuota in range(1, self.cuotas + 1):
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_principal = cuota_mensual - interes_pendiente

                saldo_restante -= amortizacion_principal
                amortizacion.append({'Cuota': cuota, 'Interés': interes_pendiente, 'Amortización': amortizacion_principal, 'Saldo Restante': saldo_restante})
            return amortizacion
        except ZeroDivisionError:
            print(" Parece que algo salió mal con los cálculos.")
            return []

    def generar_reporte(self, archivo_salida):
        """
        Genera un reporte CSV con el plan de amortización.
        """
        try:
            df = pd.DataFrame(self.amortizacion)
            df.to_csv(archivo_salida, index=False)
            print(f'Reporte generado con éxito: {archivo_salida}')
        except Exception as e:
            print(f'Ocurrió un error al generar el reporte: {str(e)}')

    def graficar_amortizacion(self):
       
        df = pd.DataFrame(self.amortizacion)

        plt.figure(figsize=(10, 6))  # ¡Asegurándonos de que se vea bien!
        plt.bar(df['Cuota'], df['Interés'], label='Interés')
        plt.bar(df['Cuota'], df['Amortización'], bottom=df['Interés'], label='Amortización')
        plt.xlabel('Número de Cuota')
        plt.ylabel('Monto ($)')  # ¡Dólares, euros, lo que sea!
        plt.title('Amortización e Interés por Cuota')
        plt.legend()
        plt.grid(True)  # ¡Porque un poco de estructura nunca viene mal!
        plt.show()

def main():
   
    try:
        # ¡Interactuando con el usuario! Pidiendo los detalles del préstamo.
        monto_prestamo = float(input("Ingrese el monto del préstamo: "))
        tasa_interes_anual = float(input("Ingrese la tasa de interés anual (%): "))
        cuotas = int(input("Ingrese la cantidad de cuotas: "))

        #  Creando tu préstamo.
        prestamo = Prestamo(monto_prestamo, tasa_interes_anual, cuotas)

        # ¡A mostrar los resultados! Generar reporte y gráfico.
        archivo_rep = "reporte_prestamo.csv"
        prestamo.generar_reporte(archivo_rep)
        prestamo.graficar_amortizacion()

    except ValueError as E:
        # Si algo sale mal, ¡aquí te decimos basicamente
        print(f'Error: {E}')
    except Exception as e:
        
        print(f'Error inesperado: {str(e)}')

if __name__ == "__main__":
    main()  



        
