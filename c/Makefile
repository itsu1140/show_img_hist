main:
	docker run -it --rm -v ${PWD}:/mnt mygcc gcc main.c
	docker run -it --rm -v ${PWD}:/mnt mygcc ./a.out
	rm -f ./a.out

main2:
	docker run -it --rm -v ${PWD}:/mnt mygcc gcc main2.c
	docker run -it --rm -v ${PWD}:/mnt mygcc ./a.out
	rm -f ./a.out

patch:
	docker compose exec -T myubuntu patch < main.c.diff