FROM gcc:latest

COPY . /app

WORKDIR /app

RUN g++ -o main main.cpp

CMD ["./main"]