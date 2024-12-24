# ベースイメージ
FROM mcr.microsoft.com/devcontainers/base:bullseye

# 必要なパッケージをインストール
RUN apt-get update && apt-get install -y \
    cmake \
    build-essential \
    libcmocka-dev \
    && apt-get clean && rm -rf /var/lib/apt/lists/*
