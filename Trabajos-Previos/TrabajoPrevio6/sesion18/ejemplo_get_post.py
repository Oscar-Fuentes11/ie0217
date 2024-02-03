import requests
# Ejemplo GET
payload = {'clave1' : 'valor1', 'clave2' : 'valor2'}
response = requests.get('https://ejemplo.com/ruta', params=payload)
print(response.text)



# Ejemplo POST
payload = {'usuario' : 'juan', 'contrasena' : 'secreta'}
response = requests.post('https://ejemplo.com/login', data=payload)
print(response.text)


payload = {'usuario' : 'juan', 'contrasena' : 'secreta'}
response = requests.post('https://ejemplo.com/login', json=payload)
print(response.text)