#!/usr/bin/env bash
containerid="$(docker ps --filter 'label=querylabel' --format '{{ .ID }}')"
docker stop $containerid
docker rm $containerid