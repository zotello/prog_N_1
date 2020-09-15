FROM rabbitmq:3.6.14-management-alpine

RUN rabbitmq-plugins enable --offline rabbitmq_stomp && \
    rabbitmq-plugins enable --offline rabbitmq_web_stomp && \
    rabbitmq-plugins enable --offline rabbitmq_recent_history_exchange

COPY rabbitmq.config /etc/rabbitmq/
COPY definitions.json /etc/rabbitmq/

EXPOSE 5672 15672 15674
