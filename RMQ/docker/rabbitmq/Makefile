IMAGE_NAME = vizoro/rabbitmq
IMAGE_TAG=$(shell git rev-parse --short HEAD)
TAG := $(IMAGE_TAG)
REGISTRY_URL = registry.open-sys.org


start: docker run

docker:
	docker build --tag $(IMAGE_NAME):$(IMAGE_TAG) .
	docker tag $(IMAGE_NAME):$(IMAGE_TAG) $(IMAGE_NAME):latest

run:
	docker run -it --rm --publish 5672:5672 --publish 15672:15672 --publish 15674:15674 $(IMAGE_NAME):$(IMAGE_TAG)

# run 'make tag TAG=<image tag>' to tag your image
tag:
	docker tag $(IMAGE_NAME):$(IMAGE_TAG) $(IMAGE_NAME):$(TAG)

# run 'make push REGISTRY_URL=<your registry url>' to override default registry URL
push:
	docker tag $(IMAGE_NAME):$(IMAGE_TAG) $(REGISTRY_URL)/$(IMAGE_NAME):$(TAG)
	docker push $(REGISTRY_URL)/$(IMAGE_NAME):$(TAG)
