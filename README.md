# Vocabulary Quiz ─ 單字記憶小工具

**Vocabulary Quiz** 是一款以 **C++** 撰寫的輕量級終端機單字測驗程式。\
透過本工具，你可以先輸入任意數量的英文單字（或片語）及其中文對應，之後選擇 **順序** 或 **隨機** 出題來進行記憶練習，適合想用鍵盤快速背單字的使用者。

---

## 功能特色

| 功能            | 說明                                                  |
| ------------- | --------------------------------------------------- |
| **單字容量大** | 全域陣列容量 100 000 筆，足以應付日常背誦需求。                        |
| **兩種測驗模式**    | `順序`（依輸入順序出題）或 `隨機`（使用 `rand()` + `time(NULL)` 洗牌）。 |
| **片語支援**      | 片語內請用 `//` 代替空格，例如 `take//care`。                    |
| **即時回饋**      | 每答一題立即顯示 **正確** 或提示正確中文。                            |
| **畫面清理**      | 透過 `system("cls")`（Windows）在不同階段清空畫面，保持介面簡潔。        |

---

## 使用方法
**依照提示操作**
   - 選擇是否隨機出題（輸入 `1` 或 `0`）。
   - 逐筆輸入「英文 單字／片語」與「中文解釋」，片語請以 `//` 替代空白。
   - 以 `##` 作為英文欄位結束輸入。
   - 開始作答，程式會即時回饋正確與否。

---

## 使用範例

以下範例示範隨機模式下的完整流程：

```text
請問是否要使用隨機出題? (要請按1  不要請按0)
1
請輸入所有單字(片語請使用 // 當作空格 輸入##表示結束)
apple 蘋果
take//care 保重
##          ← 結束輸入

請作答

take//care
保重

*正確*

apple
蘋果

*正確*
```


# Vocabulary Quiz — Vocabulary Memorization Tool

**Vocabulary Quiz** is a lightweight command‑line vocabulary quiz program written in **C++**.  
With this tool, you can input any number of English words (or phrases) alongside their Chinese meanings, then choose either **Sequential** or **Random** quiz mode to practice memorization. It’s ideal for learners who want a fast, keyboard‑only flashcard experience.

---

## Features

| Feature                | Description                                                                                       |
|------------------------|---------------------------------------------------------------------------------------------------|
| **Large Capacity**     | Global arrays can hold up to **100 000** entries, enough for extensive vocabulary lists.          |
| **Two Quiz Modes**     | **Sequential** (in input order) or **Random** (shuffled using `rand()` + `time(NULL)`).           |
| **Phrase Support**     | Use `//` to represent spaces within a phrase (e.g. `take//care`).                                |
| **Immediate Feedback** | After each answer, displays **Correct** or shows the correct Chinese translation.                 |
| **Screen Clearing**    | Calls `system("cls")` (Windows) to clear the console between stages, keeping the interface tidy.|

---

## Usage

**Follow the prompts:**  
1. **Choose quiz mode**: enter `1` for Random mode or `0` for Sequential mode.  
2. **Enter vocabulary**: type each entry as
   ```
   <EnglishWordOrPhrase> <ChineseMeaning>
   ```
   - Replace spaces in multi‑word phrases with `//`.  
   - Enter `##` as the English word to finish the list.  
3. **Answer the quiz**: the program displays each English prompt; type the exact Chinese meaning (including `//` if used).  
4. **Review feedback**: you’ll immediately see whether your answer is correct or what the correct translation is.

---

## Example Session (Random Mode)

```text
Use random quiz? (Chinese prompt: 請問是否要使用隨機出題? Press 1 for Yes, 0 for No)
1

Enter all words (Chinese prompt: 請輸入所有單字(片語請使用 // 當作空格 輸入##表示結束))
apple 蘋果
take//care 保重
##    (end input)

Start answering (Chinese prompt: 請作答)

take//care
保重

*Correct* (Chinese output: 正確)

apple
蘋果

*Correct* (Chinese output: 正確)
```


