# Название целевого исполняемого файла
TARGET = main.o

# Компилятор
CC = gcc

# Опции компиляции
CFLAGS = -Wall -Wextra

# Правило для сборки исполняемого файла
$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

# Правило для очистки (удаления) созданных файлов
clean:
	rm -f $(TARGET)

