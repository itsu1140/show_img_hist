build:
	docker-compose build
	docker-compose up -d

test:
# docker-compose exec mypython python -m unittest test_list.py
	python3 -m unittest test_list.py

coverage:
	docker compose exec mypython coverage run test_list.py
#	docker compose exec mypython coverage report

down:
	docker-compose down