# Лабораторная работа №2

## Графики зависимости времени доступа к элементу массива от размера массива:
## 1. Прямой обход

![alt text](https://github.com/vasiliykadikov/al-lab-02-cache/blob/branch-1/images/straight.png)

## 2. Обратный обход

![alt text](https://github.com/vasiliykadikov/al-lab-02-cache/blob/branch-1/images/reverce.png)

## 3. Случайный обход

![alt text](https://github.com/vasiliykadikov/al-lab-02-cache/blob/branch-1/images/random.png)

## В процессе работы программа выдала следующие результаты:

  investigaion:
    travel_order: straight
    experiments:
    - experiment:
        number: 1
        input_data:
          buffer_size: 64kb
        results:
          duration: 4.39453ns
    - experiment:
        number: 2
        input_data:
          buffer_size: 80kb
        results:
          duration: 4.39453ns
    - experiment:
        number: 3
        input_data:
          buffer_size: 96kb
        results:
          duration: 4.54102ns
    - experiment:
        number: 4
        input_data:
          buffer_size: 112kb
        results:
          duration: 4.56543ns
    - experiment:
        number: 5
        input_data:
          buffer_size: 128kb
        results:
          duration: 4.66309ns
    - experiment:
        number: 6
        input_data:
          buffer_size: 144kb
        results:
          duration: 4.63867ns
    - experiment:
        number: 7
        input_data:
          buffer_size: 160kb
        results:
          duration: 4.61426ns
    - experiment:
        number: 8
        input_data:
          buffer_size: 176kb
        results:
          duration: 4.63867ns
    - experiment:
        number: 9
        input_data:
          buffer_size: 192kb
        results:
          duration: 4.54102ns
    - experiment:
        number: 10
        input_data:
          buffer_size: 208kb
        results:
          duration: 4.56543ns
    - experiment:
        number: 11
        input_data:
          buffer_size: 224kb
        results:
          duration: 4.58984ns
    - experiment:
        number: 12
        input_data:
          buffer_size: 240kb
        results:
          duration: 4.76074ns
    - experiment:
        number: 13
        input_data:
          buffer_size: 256kb
        results:
          duration: 4.73633ns
    - experiment:
        number: 14
        input_data:
          buffer_size: 272kb
        results:
          duration: 4.83398ns
    - experiment:
        number: 15
        input_data:
          buffer_size: 288kb
        results:
          duration: 4.90723ns
    - experiment:
        number: 16
        input_data:
          buffer_size: 304kb
        results:
          duration: 4.63867ns
    - experiment:
        number: 17
        input_data:
          buffer_size: 320kb
        results:
          duration: 4.71191ns
    - experiment:
        number: 18
        input_data:
          buffer_size: 336kb
        results:
          duration: 4.78516ns
    - experiment:
        number: 19
        input_data:
          buffer_size: 352kb
        results:
          duration: 4.8584ns
    - experiment:
        number: 20
        input_data:
          buffer_size: 368kb
        results:
          duration: 4.71191ns
    - experiment:
        number: 21
        input_data:
          buffer_size: 384kb
        results:
          duration: 5.54199ns
    - experiment:
        number: 22
        input_data:
          buffer_size: 400kb
        results:
          duration: 5.9082ns
    - experiment:
        number: 23
        input_data:
          buffer_size: 416kb
        results:
          duration: 5.34668ns
    - experiment:
        number: 24
        input_data:
          buffer_size: 432kb
        results:
          duration: 4.93164ns
    - experiment:
        number: 25
        input_data:
          buffer_size: 448kb
        results:
          duration: 4.88281ns
    - experiment:
        number: 26
        input_data:
          buffer_size: 464kb
        results:
          duration: 5.05371ns
    - experiment:
        number: 27
        input_data:
          buffer_size: 480kb
        results:
          duration: 4.8584ns
    - experiment:
        number: 28
        input_data:
          buffer_size: 496kb
        results:
          duration: 4.6875ns
    - experiment:
        number: 29
        input_data:
          buffer_size: 512kb
        results:
          duration: 4.6875ns
    - experiment:
        number: 30
        input_data:
          buffer_size: 576kb
        results:
          duration: 4.88281ns
    - experiment:
        number: 31
        input_data:
          buffer_size: 640kb
        results:
          duration: 5.05371ns
    - experiment:
        number: 32
        input_data:
          buffer_size: 704kb
        results:
          duration: 4.8584ns
    - experiment:
        number: 33
        input_data:
          buffer_size: 768kb
        results:
          duration: 4.80957ns
    - experiment:
        number: 34
        input_data:
          buffer_size: 832kb
        results:
          duration: 5.07813ns
    - experiment:
        number: 35
        input_data:
          buffer_size: 896kb
        results:
          duration: 5.59082ns
    - experiment:
        number: 36
        input_data:
          buffer_size: 960kb
        results:
          duration: 5.2002ns
    - experiment:
        number: 37
        input_data:
          buffer_size: 1024kb
        results:
          duration: 4.8584ns
    - experiment:
        number: 38
        input_data:
          buffer_size: 1088kb
        results:
          duration: 4.73633ns
    - experiment:
        number: 39
        input_data:
          buffer_size: 1152kb
        results:
          duration: 4.71191ns
    - experiment:
        number: 40
        input_data:
          buffer_size: 1216kb
        results:
          duration: 4.88281ns
    - experiment:
        number: 41
        input_data:
          buffer_size: 1280kb
        results:
          duration: 4.6875ns
    - experiment:
        number: 42
        input_data:
          buffer_size: 1344kb
        results:
          duration: 4.83398ns
    - experiment:
        number: 43
        input_data:
          buffer_size: 1408kb
        results:
          duration: 4.83398ns
    - experiment:
        number: 44
        input_data:
          buffer_size: 1472kb
        results:
          duration: 4.78516ns
    - experiment:
        number: 45
        input_data:
          buffer_size: 1536kb
        results:
          duration: 4.78516ns
    - experiment:
        number: 46
        input_data:
          buffer_size: 1792kb
        results:
          duration: 4.80957ns
    - experiment:
        number: 47
        input_data:
          buffer_size: 2048kb
        results:
          duration: 4.90723ns
    - experiment:
        number: 48
        input_data:
          buffer_size: 2304kb
        results:
          duration: 4.93164ns
    - experiment:
        number: 49
        input_data:
          buffer_size: 2560kb
        results:
          duration: 4.93164ns
    - experiment:
        number: 50
        input_data:
          buffer_size: 2816kb
        results:
          duration: 5.17578ns
    - experiment:
        number: 51
        input_data:
          buffer_size: 3072kb
        results:
          duration: 5.00488ns
    - experiment:
        number: 52
        input_data:
          buffer_size: 3328kb
        results:
          duration: 5.17578ns
    - experiment:
        number: 53
        input_data:
          buffer_size: 3584kb
        results:
          duration: 5.07813ns
    - experiment:
        number: 54
        input_data:
          buffer_size: 3840kb
        results:
          duration: 5.10254ns
    - experiment:
        number: 55
        input_data:
          buffer_size: 4096kb
        results:
          duration: 5.32227ns
    - experiment:
        number: 56
        input_data:
          buffer_size: 4352kb
        results:
          duration: 5.37109ns
    - experiment:
        number: 57
        input_data:
          buffer_size: 4608kb
        results:
          duration: 5.22461ns
    - experiment:
        number: 58
        input_data:
          buffer_size: 4864kb
        results:
          duration: 5.37109ns
    - experiment:
        number: 59
        input_data:
          buffer_size: 5120kb
        results:
          duration: 5.37109ns
    - experiment:
        number: 60
        input_data:
          buffer_size: 5376kb
        results:
          duration: 5.71289ns
    - experiment:
        number: 61
        input_data:
          buffer_size: 5632kb
        results:
          duration: 5.49316ns
    - experiment:
        number: 62
        input_data:
          buffer_size: 5888kb
        results:
          duration: 5.59082ns
    - experiment:
        number: 63
        input_data:
          buffer_size: 6144kb
        results:
          duration: 5.68848ns
    - experiment:
        number: 64
        input_data:
          buffer_size: 6400kb
        results:
          duration: 5.63965ns
    - experiment:
        number: 65
        input_data:
          buffer_size: 6656kb
        results:
          duration: 5.66406ns
    - experiment:
        number: 66
        input_data:
          buffer_size: 6912kb
        results:
          duration: 5.59082ns
    - experiment:
        number: 67
        input_data:
          buffer_size: 7168kb
        results:
          duration: 5.83496ns
    - experiment:
        number: 68
        input_data:
          buffer_size: 7424kb
        results:
          duration: 5.85938ns
    - experiment:
        number: 69
        input_data:
          buffer_size: 7680kb
        results:
          duration: 5.88379ns
    - experiment:
        number: 70
        input_data:
          buffer_size: 7936kb
        results:
          duration: 5.71289ns
    - experiment:
        number: 71
        input_data:
          buffer_size: 8192kb
        results:
          duration: 5.81055ns
  investigaion:
    travel_order: reverce
    experiments:
    - experiment:
        number: 1
        input_data:
          buffer_size: 64kb
        results:
          duration: 4.32129ns
    - experiment:
        number: 2
        input_data:
          buffer_size: 80kb
        results:
          duration: 4.32129ns
    - experiment:
        number: 3
        input_data:
          buffer_size: 96kb
        results:
          duration: 4.32129ns
    - experiment:
        number: 4
        input_data:
          buffer_size: 112kb
        results:
          duration: 4.29688ns
    - experiment:
        number: 5
        input_data:
          buffer_size: 128kb
        results:
          duration: 4.41895ns
    - experiment:
        number: 6
        input_data:
          buffer_size: 144kb
        results:
          duration: 4.5166ns
    - experiment:
        number: 7
        input_data:
          buffer_size: 160kb
        results:
          duration: 4.93164ns
    - experiment:
        number: 8
        input_data:
          buffer_size: 176kb
        results:
          duration: 4.71191ns
    - experiment:
        number: 9
        input_data:
          buffer_size: 192kb
        results:
          duration: 4.66309ns
    - experiment:
        number: 10
        input_data:
          buffer_size: 208kb
        results:
          duration: 5.07813ns
    - experiment:
        number: 11
        input_data:
          buffer_size: 224kb
        results:
          duration: 5.41992ns
    - experiment:
        number: 12
        input_data:
          buffer_size: 240kb
        results:
          duration: 4.93164ns
    - experiment:
        number: 13
        input_data:
          buffer_size: 256kb
        results:
          duration: 5.0293ns
    - experiment:
        number: 14
        input_data:
          buffer_size: 272kb
        results:
          duration: 5.10254ns
    - experiment:
        number: 15
        input_data:
          buffer_size: 288kb
        results:
          duration: 5.29785ns
    - experiment:
        number: 16
        input_data:
          buffer_size: 304kb
        results:
          duration: 5.54199ns
    - experiment:
        number: 17
        input_data:
          buffer_size: 320kb
        results:
          duration: 5.71289ns
    - experiment:
        number: 18
        input_data:
          buffer_size: 336kb
        results:
          duration: 5.76172ns
    - experiment:
        number: 19
        input_data:
          buffer_size: 352kb
        results:
          duration: 5.7373ns
    - experiment:
        number: 20
        input_data:
          buffer_size: 368kb
        results:
          duration: 5.81055ns
    - experiment:
        number: 21
        input_data:
          buffer_size: 384kb
        results:
          duration: 5.9082ns
    - experiment:
        number: 22
        input_data:
          buffer_size: 400kb
        results:
          duration: 5.9082ns
    - experiment:
        number: 23
        input_data:
          buffer_size: 416kb
        results:
          duration: 5.93262ns
    - experiment:
        number: 24
        input_data:
          buffer_size: 432kb
        results:
          duration: 5.95703ns
    - experiment:
        number: 25
        input_data:
          buffer_size: 448kb
        results:
          duration: 5.95703ns
    - experiment:
        number: 26
        input_data:
          buffer_size: 464kb
        results:
          duration: 6.05469ns
    - experiment:
        number: 27
        input_data:
          buffer_size: 480kb
        results:
          duration: 5.98145ns
    - experiment:
        number: 28
        input_data:
          buffer_size: 496kb
        results:
          duration: 6.00586ns
    - experiment:
        number: 29
        input_data:
          buffer_size: 512kb
        results:
          duration: 5.98145ns
    - experiment:
        number: 30
        input_data:
          buffer_size: 576kb
        results:
          duration: 6.00586ns
    - experiment:
        number: 31
        input_data:
          buffer_size: 640kb
        results:
          duration: 6.00586ns
    - experiment:
        number: 32
        input_data:
          buffer_size: 704kb
        results:
          duration: 6.0791ns
    - experiment:
        number: 33
        input_data:
          buffer_size: 768kb
        results:
          duration: 6.03027ns
    - experiment:
        number: 34
        input_data:
          buffer_size: 832kb
        results:
          duration: 6.05469ns
    - experiment:
        number: 35
        input_data:
          buffer_size: 896kb
        results:
          duration: 6.10352ns
    - experiment:
        number: 36
        input_data:
          buffer_size: 960kb
        results:
          duration: 6.00586ns
    - experiment:
        number: 37
        input_data:
          buffer_size: 1024kb
        results:
          duration: 6.10352ns
    - experiment:
        number: 38
        input_data:
          buffer_size: 1088kb
        results:
          duration: 6.10352ns
    - experiment:
        number: 39
        input_data:
          buffer_size: 1152kb
        results:
          duration: 6.22559ns
    - experiment:
        number: 40
        input_data:
          buffer_size: 1216kb
        results:
          duration: 6.15234ns
    - experiment:
        number: 41
        input_data:
          buffer_size: 1280kb
        results:
          duration: 6.12793ns
    - experiment:
        number: 42
        input_data:
          buffer_size: 1344kb
        results:
          duration: 6.03027ns
    - experiment:
        number: 43
        input_data:
          buffer_size: 1408kb
        results:
          duration: 6.03027ns
    - experiment:
        number: 44
        input_data:
          buffer_size: 1472kb
        results:
          duration: 6.12793ns
    - experiment:
        number: 45
        input_data:
          buffer_size: 1536kb
        results:
          duration: 6.27441ns
    - experiment:
        number: 46
        input_data:
          buffer_size: 1792kb
        results:
          duration: 6.12793ns
    - experiment:
        number: 47
        input_data:
          buffer_size: 2048kb
        results:
          duration: 6.39648ns
    - experiment:
        number: 48
        input_data:
          buffer_size: 2304kb
        results:
          duration: 6.29883ns
    - experiment:
        number: 49
        input_data:
          buffer_size: 2560kb
        results:
          duration: 6.22559ns
    - experiment:
        number: 50
        input_data:
          buffer_size: 2816kb
        results:
          duration: 6.22559ns
    - experiment:
        number: 51
        input_data:
          buffer_size: 3072kb
        results:
          duration: 6.37207ns
    - experiment:
        number: 52
        input_data:
          buffer_size: 3328kb
        results:
          duration: 6.68945ns
    - experiment:
        number: 53
        input_data:
          buffer_size: 3584kb
        results:
          duration: 6.64063ns
    - experiment:
        number: 54
        input_data:
          buffer_size: 3840kb
        results:
          duration: 6.73828ns
    - experiment:
        number: 55
        input_data:
          buffer_size: 4096kb
        results:
          duration: 6.81152ns
    - experiment:
        number: 56
        input_data:
          buffer_size: 4352kb
        results:
          duration: 6.95801ns
    - experiment:
        number: 57
        input_data:
          buffer_size: 4608kb
        results:
          duration: 6.88477ns
    - experiment:
        number: 58
        input_data:
          buffer_size: 4864kb
        results:
          duration: 7.05566ns
    - experiment:
        number: 59
        input_data:
          buffer_size: 5120kb
        results:
          duration: 7.03125ns
    - experiment:
        number: 60
        input_data:
          buffer_size: 5376kb
        results:
          duration: 7.32422ns
    - experiment:
        number: 61
        input_data:
          buffer_size: 5632kb
        results:
          duration: 7.34863ns
    - experiment:
        number: 62
        input_data:
          buffer_size: 5888kb
        results:
          duration: 7.49512ns
    - experiment:
        number: 63
        input_data:
          buffer_size: 6144kb
        results:
          duration: 7.42188ns
    - experiment:
        number: 64
        input_data:
          buffer_size: 6400kb
        results:
          duration: 7.49512ns
    - experiment:
        number: 65
        input_data:
          buffer_size: 6656kb
        results:
          duration: 7.6416ns
    - experiment:
        number: 66
        input_data:
          buffer_size: 6912kb
        results:
          duration: 7.66602ns
    - experiment:
        number: 67
        input_data:
          buffer_size: 7168kb
        results:
          duration: 7.73926ns
    - experiment:
        number: 68
        input_data:
          buffer_size: 7424kb
        results:
          duration: 7.69043ns
    - experiment:
        number: 69
        input_data:
          buffer_size: 7680kb
        results:
          duration: 7.76367ns
    - experiment:
        number: 70
        input_data:
          buffer_size: 7936kb
        results:
          duration: 7.66602ns
    - experiment:
        number: 71
        input_data:
          buffer_size: 8192kb
        results:
          duration: 7.73926ns
  investigaion:
    travel_order: random
    experiments:
    - experiment:
        number: 1
        input_data:
          buffer_size: 64kb
        results:
          duration: 2.34375ns
    - experiment:
        number: 2
        input_data:
          buffer_size: 80kb
        results:
          duration: 2.31934ns
    - experiment:
        number: 3
        input_data:
          buffer_size: 96kb
        results:
          duration: 4.15039ns
    - experiment:
        number: 4
        input_data:
          buffer_size: 112kb
        results:
          duration: 4.32129ns
    - experiment:
        number: 5
        input_data:
          buffer_size: 128kb
        results:
          duration: 2.44141ns
    - experiment:
        number: 6
        input_data:
          buffer_size: 144kb
        results:
          duration: 4.1748ns
    - experiment:
        number: 7
        input_data:
          buffer_size: 160kb
        results:
          duration: 4.39453ns
    - experiment:
        number: 8
        input_data:
          buffer_size: 176kb
        results:
          duration: 3.02734ns
    - experiment:
        number: 9
        input_data:
          buffer_size: 192kb
        results:
          duration: 4.41895ns
    - experiment:
        number: 10
        input_data:
          buffer_size: 208kb
        results:
          duration: 4.3457ns
    - experiment:
        number: 11
        input_data:
          buffer_size: 224kb
        results:
          duration: 4.10156ns
    - experiment:
        number: 12
        input_data:
          buffer_size: 240kb
        results:
          duration: 4.44336ns
    - experiment:
        number: 13
        input_data:
          buffer_size: 256kb
        results:
          duration: 4.12598ns
    - experiment:
        number: 14
        input_data:
          buffer_size: 272kb
        results:
          duration: 3.22266ns
    - experiment:
        number: 15
        input_data:
          buffer_size: 288kb
        results:
          duration: 2.88086ns
    - experiment:
        number: 16
        input_data:
          buffer_size: 304kb
        results:
          duration: 6.00586ns
    - experiment:
        number: 17
        input_data:
          buffer_size: 320kb
        results:
          duration: 5.93262ns
    - experiment:
        number: 18
        input_data:
          buffer_size: 336kb
        results:
          duration: 4.58984ns
    - experiment:
        number: 19
        input_data:
          buffer_size: 352kb
        results:
          duration: 4.22363ns
    - experiment:
        number: 20
        input_data:
          buffer_size: 368kb
        results:
          duration: 5.29785ns
    - experiment:
        number: 21
        input_data:
          buffer_size: 384kb
        results:
          duration: 5.71289ns
    - experiment:
        number: 22
        input_data:
          buffer_size: 400kb
        results:
          duration: 9.32617ns
    - experiment:
        number: 23
        input_data:
          buffer_size: 416kb
        results:
          duration: 5.00488ns
    - experiment:
        number: 24
        input_data:
          buffer_size: 432kb
        results:
          duration: 6.20117ns
    - experiment:
        number: 25
        input_data:
          buffer_size: 448kb
        results:
          duration: 7.20215ns
    - experiment:
        number: 26
        input_data:
          buffer_size: 464kb
        results:
          duration: 10.2051ns
    - experiment:
        number: 27
        input_data:
          buffer_size: 480kb
        results:
          duration: 3.34473ns
    - experiment:
        number: 28
        input_data:
          buffer_size: 496kb
        results:
          duration: 3.34473ns
    - experiment:
        number: 29
        input_data:
          buffer_size: 512kb
        results:
          duration: 4.78516ns
    - experiment:
        number: 30
        input_data:
          buffer_size: 576kb
        results:
          duration: 6.54297ns
    - experiment:
        number: 31
        input_data:
          buffer_size: 640kb
        results:
          duration: 7.95898ns
    - experiment:
        number: 32
        input_data:
          buffer_size: 704kb
        results:
          duration: 10.4492ns
    - experiment:
        number: 33
        input_data:
          buffer_size: 768kb
        results:
          duration: 4.95605ns
    - experiment:
        number: 34
        input_data:
          buffer_size: 832kb
        results:
          duration: 6.4209ns
    - experiment:
        number: 35
        input_data:
          buffer_size: 896kb
        results:
          duration: 12.8906ns
    - experiment:
        number: 36
        input_data:
          buffer_size: 960kb
        results:
          duration: 12.0361ns
    - experiment:
        number: 37
        input_data:
          buffer_size: 1024kb
        results:
          duration: 10.0098ns
    - experiment:
        number: 38
        input_data:
          buffer_size: 1088kb
        results:
          duration: 12.7686ns
    - experiment:
        number: 39
        input_data:
          buffer_size: 1152kb
        results:
          duration: 12.8418ns
    - experiment:
        number: 40
        input_data:
          buffer_size: 1216kb
        results:
          duration: 12.3291ns
    - experiment:
        number: 41
        input_data:
          buffer_size: 1280kb
        results:
          duration: 12.9883ns
    - experiment:
        number: 42
        input_data:
          buffer_size: 1344kb
        results:
          duration: 4.63867ns
    - experiment:
        number: 43
        input_data:
          buffer_size: 1408kb
        results:
          duration: 12.8906ns
    - experiment:
        number: 44
        input_data:
          buffer_size: 1472kb
        results:
          duration: 6.5918ns
    - experiment:
        number: 45
        input_data:
          buffer_size: 1536kb
        results:
          duration: 13.1592ns
    - experiment:
        number: 46
        input_data:
          buffer_size: 1792kb
        results:
          duration: 13.3545ns
    - experiment:
        number: 47
        input_data:
          buffer_size: 2048kb
        results:
          duration: 9.17969ns
    - experiment:
        number: 48
        input_data:
          buffer_size: 2304kb
        results:
          duration: 14.6484ns
    - experiment:
        number: 49
        input_data:
          buffer_size: 2560kb
        results:
          duration: 14.6729ns
    - experiment:
        number: 50
        input_data:
          buffer_size: 2816kb
        results:
          duration: 14.1113ns
    - experiment:
        number: 51
        input_data:
          buffer_size: 3072kb
        results:
          duration: 15.1367ns
    - experiment:
        number: 52
        input_data:
          buffer_size: 3328kb
        results:
          duration: 6.5918ns
    - experiment:
        number: 53
        input_data:
          buffer_size: 3584kb
        results:
          duration: 14.6729ns
    - experiment:
        number: 54
        input_data:
          buffer_size: 3840kb
        results:
          duration: 13.7939ns
    - experiment:
        number: 55
        input_data:
          buffer_size: 4096kb
        results:
          duration: 6.81152ns
    - experiment:
        number: 56
        input_data:
          buffer_size: 4352kb
        results:
          duration: 13.623ns
    - experiment:
        number: 57
        input_data:
          buffer_size: 4608kb
        results:
          duration: 13.8184ns
    - experiment:
        number: 58
        input_data:
          buffer_size: 4864kb
        results:
          duration: 13.6475ns
    - experiment:
        number: 59
        input_data:
          buffer_size: 5120kb
        results:
          duration: 16.3818ns
    - experiment:
        number: 60
        input_data:
          buffer_size: 5376kb
        results:
          duration: 24.3652ns
    - experiment:
        number: 61
        input_data:
          buffer_size: 5632kb
        results:
          duration: 34.3018ns
    - experiment:
        number: 62
        input_data:
          buffer_size: 5888kb
        results:
          duration: 44.2871ns
    - experiment:
        number: 63
        input_data:
          buffer_size: 6144kb
        results:
          duration: 16.7969ns
    - experiment:
        number: 64
        input_data:
          buffer_size: 6400kb
        results:
          duration: 69.6777ns
    - experiment:
        number: 65
        input_data:
          buffer_size: 6656kb
        results:
          duration: 23.9014ns
    - experiment:
        number: 66
        input_data:
          buffer_size: 6912kb
        results:
          duration: 6.5918ns
    - experiment:
        number: 67
        input_data:
          buffer_size: 7168kb
        results:
          duration: 15.9912ns
    - experiment:
        number: 68
        input_data:
          buffer_size: 7424kb
        results:
          duration: 14.8926ns
    - experiment:
        number: 69
        input_data:
          buffer_size: 7680kb
        results:
          duration: 14.7705ns
    - experiment:
        number: 70
        input_data:
          buffer_size: 7936kb
        results:
          duration: 14.9902ns
    - experiment:
        number: 71
        input_data:
          buffer_size: 8192kb
        results:
          duration: 65.4785ns
