# Docker最初のサンプル

実行コマンド

```bash
docker build -t mypython:0.1 .
docker run -it --rm -v ${PWD}:/mnt mypython:0.1 python hello.py
```

もしくは

```bash
docker compose up -d
docker compose exec mypython python hello.py
docker compose down
```
