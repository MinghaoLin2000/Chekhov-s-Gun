import ssl
from os import wait3
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from undetected_chromedriver import Chrome, ChromeOptions
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from bs4 import BeautifulSoup
import json
import random
import argparse

import time

import requests

def getEntitlementjsonfile():
    #url = "https://developer.apple.com/tutorials/data/documentation/bundleresources/entitlements.json"
    url="https://developer.apple.com/tutorials/data/documentation/security/app-sandbox.json"
    response = requests.get(url)

    with open("S3_result/official_data/app-sandbox.json", "wb") as f:
        f.write(response.content)

def fetch_entitlements(driver):
    '''
    <div data-v-35853846="" class="title-container"><!----><span data-v-7df49445="" data-v-35853846="" id="label--933540680" hidden="hidden"> 10 of 219 symbols inside -1041620562 </span><a data-v-7df49445="" href="/documentation/bundleresources/entitlements/com.apple.developer.marketplace.app-installation" class="leaf-link" id="-933540680" tabindex="-1" aria-describedby="label--933540680 usage--933540680" data-v-35853846=""><p data-v-fc9a395c="" data-v-7df49445="" class="highlight">com.apple.developer.marketplace.app-installation</p></a><!----></div>
    '''
    WebDriverWait(driver, 30).until(EC.presence_of_element_located((By.TAG_NAME, "body")))
    print(driver.page_source)

    title_containers=driver.find_elements(By.CLASS_NAME,"title-container")
    print(title_containers)
    for title_container in title_containers:
        title=title_container.find_element(By.CLASS_NAME,"leaf-link")
        href=title.get_attribute("href")
        print(href)

def test_driver(start_page, end_page):
    # 测试使用，请求https网站时，禁用SSL证书验证
    ssl._create_default_https_context = ssl._create_unverified_context
    # 创建ChromeOptions对象，并设置一些选项
    options = ChromeOptions()
    # 如果要使用无界面访问，开启此参数，默认有窗口界面
    #options.add_argument('--headless')
    # 将窗口最大化
    options.add_argument('--start-maximized')
    options.add_argument('--disable-infobars')
    #options.add_argument("--auto-open-devtools-for-tabs")
    # 创建Chrome对象，并使用指定的选项启动Chrome浏览器
    driver = Chrome(options=options)
    # 如本地driver版本与浏览器版本不一致，使用executable_path 指定driver路径
    #driver = Chrome(options=options, executable_path='/usr/local/bin/chromedriver')
    # 访问网站
    # Step 1: 打开 Google 作为暖机网页
    driver.get("https://developer.apple.com/documentation/bundleresources/entitlements/")
    fetch_entitlements(driver)
    #time.sleep(3)
    #收集用户信息
    #new_collectUserID(driver,start_page,end_page)
    #具体某一个用户的文章和评论 根据用户名
    #collectUserArticlesByUserID(driver,0)
    #driver.get(url)
    #driver.refresh()
    # 关闭Chrome浏览器
    #driver.quit()


if __name__ == '__main__':
    getEntitlementjsonfile()
    #Load entitlements.json
    final_result={}
    with open("S3_result/official_data/entitlements.json", "r") as f:
        entitlements = json.load(f)
    #print(entitlements["topicSections"])
    for ent_url,ent_desc in entitlements["references"].items():
        #print(topicSection["title"])
        if len(ent_desc["abstract"])!=0 and "Entitlements/" in ent_url:
            final_result[ent_url.split("/")[-1]]=ent_desc["abstract"][0]["text"]
    with open("S3_result/official_data/app-sandbox.json", "r") as f:
        entitlements = json.load(f)
    #print(entitlements["topicSections"])
    for ent_url,ent_desc in entitlements["references"].items():
        #print(topicSection["title"])
        if len(ent_desc["abstract"])!=0 and "Entitlements/" in ent_url:
            final_result[ent_url.split("/")[-1]]=ent_desc["abstract"][0]["text"]
    #dump final_result to json file
    with open("S3_result/official_data/final_entitlements_result.json", "w") as f:
        json.dump(final_result, f)
    #test_driver(0,0)



