import requests

response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
print("Tipo:", type(response))
print("Respuesta:", response)
print("Respuesta text:", response.text)

print("Respuesta:", response.__dict__)