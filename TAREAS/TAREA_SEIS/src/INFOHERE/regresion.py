from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline


def regresion_lineal_precios(df):
    data = df[['year', 'selling_price']]

    # Aca debemos dividir el conjunto de datos en entrenamiento y prueba
    train_data, test_data = train_test_split(data, test_size=0.2, random_state=42)

# Se separan las características y la variable objetivo en el conjunto de entrenamiento
    X_train = train_data[['year']]
    y_train = train_data['selling_price']

# Se separan las características y la variable objetivo en el conjunto de prueba
    X_test = test_data[['year']]
    y_test = test_data['selling_price']

# Crear y entrenar el modelo de regresión lineal
    model = LinearRegression()
    model.fit(X_train, y_train)

# Realizar predicciones en el conjunto de prueba
    predictions = model.predict(X_test)

# Evaluar el rendimiento del modelo
    print("Precio de venta en funcion del anno")
    mse_years = mean_squared_error(y_test, predictions)
    r2_years = r2_score(y_test, predictions)
    mae_years = mean_absolute_error(y_test, predictions)

    print(f'Mean Squared Error (Years): {mse_years}')
    print(f'R² Score (Years): {r2_years}')
    print(f'Mean Absolute Error (Years): {mae_years}')

# Visualizar los resultados
    plt.scatter(X_test, y_test, color='black')
    plt.plot(X_test, predictions, color='blue', linewidth=3)
    plt.xlabel('Year')
    plt.ylabel('Selling Price')
    plt.title('Linear Regression: Year vs Selling Price')
    plt.show()



def regresion_lineal_kilometros(df):
    # Crear un DataFrame con las características relevantes
    data_km = df[['km_driven', 'selling_price']]

# Dividir el conjunto de datos en entrenamiento y prueba
    train_data_km, test_data_km = train_test_split(data_km, test_size=0.2, random_state=42)

# Separar las características y la variable objetivo en el conjunto de entrenamiento
    X_train_km = train_data_km[['km_driven']]
    y_train_km = train_data_km['selling_price']

# Separar las características y la variable objetivo en el conjunto de prueba
    X_test_km = test_data_km[['km_driven']]
    y_test_km = test_data_km['selling_price']

# Crear y entrenar el modelo de regresión lineal
    model_km = LinearRegression()
    model_km.fit(X_train_km, y_train_km)

# Realizar predicciones en el conjunto de prueba
    predictions_km = model_km.predict(X_test_km)

# Evaluar el rendimiento del modelo
    print("\nPrecio de venta en funcion del kilometraje")
    mse_km = mean_squared_error(y_test_km, predictions_km)
    r2_km = r2_score(y_test_km, predictions_km)
    mae_km = mean_absolute_error(y_test_km, predictions_km)

    print(f'Mean Squared Error (Kilómetros Recorridos): {mse_km}')
    print(f'R² Score (Kilómetros Recorridos): {r2_km}')
    print(f'Mean Absolute Error (Kilómetros Recorridos): {mae_km}')

# Visualizar los resultados
    plt.scatter(X_test_km, y_test_km, color='black')
    plt.plot(X_test_km, predictions_km, color='blue', linewidth=3)
    plt.xlabel('Kilómetros Recorridos')
    plt.ylabel('Selling Price')
    plt.title('Linear Regression: Kilómetros Recorridos vs Selling Price')
    plt.show()


def regresion_no_lineal_precios(data):
    # Extracción de características y objetivo
    X = data['year'].values.reshape(-1, 1)
    y = data['selling_price'].values

    # División de los datos en conjunto de entrenamiento y prueba
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

    # Crear y entrenar un modelo de regresión polinómica
    degree = 2  # Ajusta el grado del polinomio según sea necesario
    model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
    model_nonlinear.fit(X_train, y_train)

    # Realizar predicciones en el conjunto de prueba
    predictions_nonlinear = model_nonlinear.predict(X_test)

    # Evaluar el rendimiento del modelo
    mse_nonlinear = mean_squared_error(y_test, predictions_nonlinear)
    r2_nonlinear = r2_score(y_test, predictions_nonlinear)
    mae_nonlinear = mean_absolute_error(y_test, predictions_nonlinear)

    print(f'Mean Squared Error (No lineal): {mse_nonlinear}')
    print(f'R² Score (No lineal): {r2_nonlinear}')
    print(f'Mean Absolute Error (No lineal): {mae_nonlinear}')

    plt.scatter(X_test, y_test, label='Datos reales')
    plt.scatter(X_test, predictions_nonlinear, label='Predicciones', color='red')
    plt.title('Regresión No Lineal para Precios a lo Largo de los Años')
    plt.xlabel('Año')
    plt.ylabel('Precio de Venta')
    plt.legend()
    plt.show()



def regresion_no_lineal_kilometros(data):
    # Extracción de características y objetivo
    X = data['km_driven'].values.reshape(-1, 1)
    y = data['selling_price'].values

    # División de los datos en conjunto de entrenamiento y prueba
    X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

    # Crear y entrenar un modelo de regresión polinómica
    degree = 2  # Ajusta el grado del polinomio según sea necesario
    model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
    model_nonlinear.fit(X_train, y_train)

    # Realizar predicciones en el conjunto de prueba
    predictions_nonlinear = model_nonlinear.predict(X_test)

    # Evaluar el rendimiento del modelo
    mse_nonlinear = mean_squared_error(y_test, predictions_nonlinear)
    r2_nonlinear = r2_score(y_test, predictions_nonlinear)
    mae_nonlinear = mean_absolute_error(y_test, predictions_nonlinear)

    print(f'Mean Squared Error (No lineal): {mse_nonlinear}')
    print(f'R² Score (No lineal): {r2_nonlinear}')
    print(f'Mean Absolute Error (No lineal): {mae_nonlinear}')

    plt.scatter(X_test, y_test, label='Datos reales')
    plt.scatter(X_test, predictions_nonlinear, label='Predicciones', color='red')
    plt.title('Regresión No Lineal para Distribución de Kilómetros Recorridos')
    plt.xlabel('Kilómetros Recorridos')
    plt.ylabel('Precio de Venta')
    plt.legend()
    plt.show()

