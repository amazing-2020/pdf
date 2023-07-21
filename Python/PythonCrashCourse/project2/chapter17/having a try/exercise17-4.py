import requests
import plotly.express as px

# url = "https://api.github.com/repos/ventoy/Ventoy/issues?q=exfat+in:body+is:open&sort=comments"
url = "https://api.github.com/search/issues?q=repo:ventoy/Ventoy+exfat+sort:comments"
headers = {"Accept": "application/vnd.github.v3+json"}
r = requests.get(url, headers=headers, timeout=10)
print(f"Status code: {r.status_code}")

response_dict = r.json()
print(f"Total repositories: {response_dict['total_count']}")
print(f"Complete results: {not response_dict['incomplete_results']}")

respo_dicts = response_dict['items']

issue_dicts = []
comments, issue_links = [], []

for respo_dict in respo_dicts:
    comments.append(respo_dict['comments'])
    issue_link = f"<a href='{respo_dict['user']['html_url']}'>{respo_dict['title']}</a>"
    issue_links.append(issue_link)

title = 'Ventoy most communicated issue'
labels = {'x': 'Issue', 'y': 'Comments'}
fig = px.bar(x=issue_links, y=comments, title=title, labels=labels)
fig.update_layout(title_font_size=24, xaxis_title_font_size=20, yaxis_title_font_size=20)
fig.update_traces(marker_color='SteelBlue', marker_opacity=0.5)
fig.update_layout(uniformtext_minsize=8, uniformtext_mode='hide')
fig.show()
# X轴上标识数据的文本过长，未解决此问题
