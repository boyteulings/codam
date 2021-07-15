find . -type f -name "*.sh" | sed 's/\.sh$//' | xargs basename -a
