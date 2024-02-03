import requests

try:
    response = requests.get('https://ejemplo.com/pagina-inexistente')
    response.raise_for_status()
    print(response.text)

except requests.exceptions.HTTPError as err:
    print(f"Error HTTP: {err}")