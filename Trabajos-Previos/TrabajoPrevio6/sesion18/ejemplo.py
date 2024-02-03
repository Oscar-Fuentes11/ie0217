import requests

users_response = requests.get('https://jsonplaceholder.typicode.com/users')
users_data = users_response.json()


posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')
posts_data = posts_response.json()


user_posts = {}

for user in users_data:
    user_posts[user['id']]=[]

for post in posts_data:
    user_id = post.get('userId')
    if user_id in user_posts:
        user_posts[user_id].append({
            'title' : post['title'],
            'body':post['body']
        })

for user_id, posts in user_posts.itms():
    user = next((user for user in users_data if user['id'] == user_id), None)
    if user:
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")

    else:
        print(f"No se encontraron datos para el usuario con ID {user_id}")