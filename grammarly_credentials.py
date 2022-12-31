# Hacked by QXQ on 2022.8.2.
# Educational Purposes Only.

import requests
from bs4 import BeautifulSoup
# Web URL
site_url = "https://fast2tech.com/how-to-get-grammarly-premium-free-for-lifetime/"

#header with useragent
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'}

# Get URL Content
results = requests.get(site_url, headers=headers)
# Parse HTML Code
soup = BeautifulSoup(results.content, 'html.parser')
print("正在解析网页中...")
#print(soup.prettify())
print("解析成功")
x=soup.find_all("strong")

# remove "<strong>" and "<strong/>"
print("邮箱:{}".format(x[4].text))
print("密码:{}".format(x[5].text))
print("script made by QXQ.")