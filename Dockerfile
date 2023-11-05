FROM ubuntu

RUN apt-get update && apt-get install -y \
    build-essential git clang valgrind curl lsb-release python3-venv pip

RUN python3 -m pip install norminette

RUN bash -c "$(curl -fsSL https://raw.github.com/xicodomingues/francinette/master/bin/install.sh)"

RUN mkdir LIBFT

WORKDIR /LIBFT

COPY . .

CMD ["francinette"]
