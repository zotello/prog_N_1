include .env.dev
export

COMPOSE_CMD = docker-compose -p vizoro-rmq --file docker/compose-files/local.yml

local.up: local.pull ### Update images and start all services.
	@$(COMPOSE_CMD) up -d
	@echo
	@$(COMPOSE_CMD) ps
	@echo "<=====================================>"

local.down: ### Stop services.
	@$(COMPOSE_CMD) down

local.stop: ### Stop service.
	@$(COMPOSE_CMD) stop rabbitmq

local.pull:
	@$(COMPOSE_CMD) pull || true

local.ps: ### Show services status.
	@$(COMPOSE_CMD) ps

