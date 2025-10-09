# 簡單 ATM 模擬器

---

## 題目

輸入要提領的金額\
輸出由 1000 ~ 100 之間每個級距的紙鈔分別需要多少張

**進階:** 設置 >1 個帳號，先輸入帳號，再輸入要提領的錢，如果要提領的錢比存款還少，則不扣款並顯示 `Balance insufficient`；如果存款足夠，則扣款後輸出由 1000 ~ 100 之間每個級距的紙鈔分別需要多少張

<span class="apcsStlInc">以上為 APCS Style 題目截止，以下為實用模擬工具擴充</span>

以功能新增步驟表示
- 輸入帳號後選擇存提款功能
- 輸入帳號 → 選擇功能 → 輸入存入金額 → 將對應帳號的存款加值
- 由直接輸入存入金額改為依序輸入由 1000 ~ 100 之間每個級距的紙鈔分別存入多少張，計算後計算總金額，並顯示確認畫面，確認後再存入

---

## 輸入格式 <span class="apcsStlInc">(僅 APCS Style)</span>

[前往執行畫面](#執行畫面)

### 第一階段

```
2800
```
就是提領金額

### 第二階段

測試一

```
1
3700
```

測試二

```
2
123456
```

第一行: 帳號
第二行: 欲提領金額

---

## 執行畫面

### <span class="apcsStlInc">APCS Style</span>

#### 第一階段

```
2800
2 1 3
```

輸入 `2800`，代表要提領 $2800\
分別輸出 1000、500 和 100 元紙鈔的數量，並以空格分割\
`2 1 3` = 2×`1000`, 1×`500`, 3×`100`

#### 第二階段

測試一

```
1
3700
3 1 2
```

測試二

```
2
123456
Balance insufficient
```

### 功能導向

#### 第一階段

```
Please enter the balance you want to withdraw: 3700

$1000   x3
$500    x1
$100    x2
```

#### 第二階段

```
Please enter your account: 1
Please enter the balance you want to withdraw: 3700

$1000   x3
$500    x1
$100    x2
```

```
Please enter your account: 2
Please enter the balance you want to withdraw: 123456

! Balance insufficient !
```

#### 最終階段

```
Please enter your account: 1
Withdraw or deposit? (Withdraw = 1, deposit = 2): 2

Please enter how much $1000 bill you want to deposit: 2
Please enter how much $500 bill you want to deposit: 3
Please enter how much $100 bill you want to deposit: 4

Target balance: $3900
Is that correct? (Y/n): Y

Deposit success.
Your balance is now $4000.
Thank you for using the simulation bank.

---

Please enter your account: 
```