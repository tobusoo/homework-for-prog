import requests
import time


def get_ip_by_hostname(hostname):
    url = "http://ip-api.com/json/{0}"
    start_time = time.time()
    response = requests.get(url.format(hostname)).json()
    end_time = time.time() - start_time
    data = [response['query'],
            str(end_time)[:4],
            response['country'],
            response['city']]
    return data
