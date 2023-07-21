from operator import itemgetter

import requests

import plotly.express as px


def edit_title(s):
    result = ""
    length = len(s)
    for i in range(0, length, 20):
        result += s[i:i+20] + '<br />'
    return result


url = "https://hacker-news.firebaseio.com/v0/topstories.json"
r = requests.get(url)
print(f"Status code: {r.status_code}")

submission_ids = r.json()
submission_dicts = []
titles, hn_links, comments = [], [], []

for submission_id in submission_ids[:5]:
    url = f"https://hacker-news.firebaseio.com/v0/item/{submission_id}.json"
    r = requests.get(url)
    print(f"id: {submission_id}\tstatus: {r.status_code}")

    response_dict = r.json()
    submission_dict = {
        'title': response_dict['title'],
        'hn_link': f"https://news.ycombinator.com/item?id={submission_id}",
        'comments': response_dict['descendants'],
    }
    submission_dict['title'] = edit_title(submission_dict['title'])

    submission_dicts.append(submission_dict)

submission_dicts = sorted(submission_dicts, key=itemgetter('comments'), reverse=True)
for submission_dict in submission_dicts:
    comments.append(submission_dict['comments'])

    hn_link = f"<a href='{submission_dict['hn_link']}'>{submission_dict['title']}</a>"
    hn_links.append(hn_link)

title = "Hacker News Discussion"
labels = {'x': "Hn_links", 'y': "Comments"}
fig = px.bar(x=hn_links, y=comments, title=title, labels=labels)
fig.update_layout(title_font_size=24, xaxis_title_font_size=20, yaxis_title_font_size=20)
fig.update_traces(marker_color='SteelBlue', marker_opacity=0.5)
fig.update_layout(uniformtext_minsize=8, uniformtext_mode='hide')
fig.update_layout(
    xaxis_tickformat='%s',
)
fig.show()
