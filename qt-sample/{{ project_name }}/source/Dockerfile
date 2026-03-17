
FROM alpine:3.23 AS install

  RUN apk --update-cach upgrade

  RUN apk add cmake
  RUN apk add ninja-build
  RUN apk add clang21
  RUN apk add clang21-extra-tools
  RUN apk add qt6-qtbase-dev

FROM install AS build

  ENV PATH="${PATH}:/usr/lib/ninja-build/bin"

  WORKDIR /app/source

  COPY . .

  WORKDIR /app

  RUN mkdir build

  RUN cmake -S source -B build --preset docker
  RUN cmake --build build

FROM alpine:3.23 AS production

  RUN adduser -D -u 1000 -g 1000 {{ project_name }}

  RUN apk --update-cache upgrade

  RUN apk add qt6-qtbase

  WORKDIR /home/{{ project_name }}

  COPY --from=build /app/build/{{ project_name }} ./{{ project_name }}

  USER {{ project_name }}

  ENTRYPOINT ["/bin/sh", "-c", "/home/{{ project_name }}/{{ project_name }}"]

