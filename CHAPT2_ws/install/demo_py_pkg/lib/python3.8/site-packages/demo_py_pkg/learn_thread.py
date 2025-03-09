import threading
import requests
class download:
    def downlosd(self,url,callback_word_count):
        print(f"开始下载{url},当前线程{threading.current_thread().name}")
        response = requests.get(url)
        response.encoding = "utf-8"
        callback_word_count(url,response.text)

    def start_download(self,url,callback_word_count):
        # 启动一个新的线程
        thread = threading.Thread(target=self.downlosd,args=(url,callback_word_count))
        thread.start()


def word_count(url,result):
    print(f"{url}:{len(result)}->{result[:5]}")

def main():
    download = download()