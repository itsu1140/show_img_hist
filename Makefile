patch:
	docker compose exec -T myubuntu patch < main.c.diff

diff:
	docker compose exec myubuntu diff main.c main2.c

down:
	docker compose down

build:
	docker-compose build
	docker-compose up -d

main:
	gcc -o main main.c
	./main
	rm -f ./main

git:
#	eval "$(ssh-agent -s)"
	ssh-add ~/.ssh/nitech/id_ed25519