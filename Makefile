patch:
	docker compose exec -T myubuntu patch < main.c.diff

diff:
	docker compose exec myubuntu diff main.c main2.c

