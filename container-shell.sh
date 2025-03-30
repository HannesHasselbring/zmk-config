#!/usr/bin/env bash
containerid="$(docker ps --filter 'label=querylabel' --format '{{ .ID }}')"
docker exec -w /workspaces/zmk -it $containerid /bin/bash