#!/bin/bash -e

declare -ir interval="${1:-3}"

################################################################################

exec watch -n "$interval" egrep 'en[34]0-TxRx-[[:digit:]]+' /proc/interrupts
