# 洛谷刷题仓库

大一上 C 语言刷题记录。每题三件套：`main.c` + AC 截图 + 一条 `W<n>: P<题号> <题名> AC` 的 commit。

## 进度

| 项 | 值 |
|---|---|
| 关卡 | G0 ✅ / G1 🟡（累计 22 题，现 6 题） |
| 本周 W1 | 6 / 6 题 ✅ |
| check.sh | 12 / 12 |
| 三问台账 | 6 题待补（`notes/`） |

## 题目

| 题号 | 题名 | AC 日期 | 源码 | 证据 |
|---|---|---|---|---|
| P1046 | 陶陶摘苹果 | 2026-11-11 | `w1/p1046-pro/main.c` | `evidence/20261111-p1046-ac.png` |
| P1055 | ISBN 号码 | 2026-11-13 | `w1/p1055-ISBN_number/main.c` | `evidence/20261113-p1055-ac.png` |
| P1425 | 小鱼的游泳时间 | 2026-11-11 | `w1/p1425-fish_swim_time/main.c` | `evidence/20261111-p1425-ac.png` |
| P5707 | 上学迟到 | 2026-11-12 | `w1/p5707-late_for_school/main.c` | `evidence/20261112-p5707-ac.png` |
| P5711 | 闰年判断 | 2026-11-10 | `w1/p5711-leap/main.c` | `evidence/20261110-p5711-ac.png` |
| P5716 | 月份天数 | 2026-11-12 | `w1/p5716-months_days/main.c` | `evidence/20261112-p5716-ac.png` |

## 目录

```
w1/                      第 1 周（11/09–11/15）
  p1046-pro/
  p1055-ISBN_number/
  p1425-fish_swim_time/
  p5707-late_for_school/
  p5711-leap/
  p5716-months_days/
evidence/                AC 截图与 G0 环境证据（PNG）
notes/                   三问台账（p<题号>.md）与错题本（wrong.md）
```

`main` / `*.o` / `*.out` 等编译产物在 `.gitignore` 里，不入库。

## 编译与自测

```bash
cd w1/p1425-fish_swim_time
gcc -std=c11 -O2 -Wall -Wextra main.c -o main
printf '12 50 19 10\n' | ./main      # 期望 6 20
```

## 维护约定

- 每题 AC 后跑 `bash ~/dsh_workstation/submit.sh ac <题号> <题名>`，会自动编译、commit、push。
- 周检：`bash ~/dsh_workstation/submit.sh week`，输出存到 `evidence/周检-<日期>.txt`。
- 每题 AC 后补 `notes/p<题号>.md` 的三问（A1/A2/A3），不补不计独立。
- 本表在每次 AC 后补一行（题号 / 题名 / 日期 / 源码 / 证据）。
