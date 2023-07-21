import requests
import plotly.express as px

def get_github_star(language):
    url = "https://api.github.com/search/repositories"
    url += f"?q=language:{language}+sort:stars+stars:>10000"

    headers = {"Accept": "application/vnd.github.v3+json"}
    r = requests.get(url, headers=headers, timeout=10)
    print(f"Status code: {r.status_code}")

    response_dict = r.json()
    print(f"Total repositories: {response_dict['total_count']}")
    print(f"Complete results: {not response_dict['incomplete_results']}")

    repo_dicts = response_dict['items']
    repo_links, stars, hover_texts = [], [], []

    for repo_dict in repo_dicts:
        repo_name = repo_dict['name']
        repo_url = repo_dict['html_url']
        repo_link = f"<a href='{repo_url}'>{repo_name}</a>"
        repo_links.append(repo_link)

        stars.append(repo_dict['stargazers_count'])

        owner = repo_dict['owner']['login']
        description = repo_dict['description']
        hover_text = f"{owner}<br />{description}"
        hover_texts.append(hover_text)

    title = f'Most-Starred {language} Projects on GitHub'
    labels = {'x': "repository", "y": "Stars"}
    fig = px.bar(x=repo_links, y=stars, title=title, labels=labels, hover_name=hover_texts)
    fig.update_layout(title_font_size=24, xaxis_title_font_size=20, yaxis_title_font_size=20)
    fig.update_traces(marker_color='SteelBlue', marker_opacity=0.5)
    fig.show()


get_github_star('c')
get_github_star('go')
get_github_star('ruby')
get_github_star('java')
get_github_star('perl')
get_github_star('haskell')
get_github_star('javascript')
