# 販賣機模擬器

---

## 題目

輸出要購買的物品代號和售價\
輸入要購買的物品代號和投入的金額\
輸出由 50 ~ 1 之間每個級距的硬幣分別要找多少個

**進階:** 投入金額由直接輸入存入金額改為依序輸入由 50 ~ 1 之間每個級距的硬幣分別投入多少個

<span class="apcsStlInc">以上為 APCS Style 題目截止，以下為實用模擬工具擴充</span>

若投入金額足夠，則顯示 `Thank you!`\
若投入金額不足，則重複要求補足金額，輸出 `You still need $[  ] to purchase this`
*金額不足: <span class="apcsStlInc">APCS Style</span>: 僅輸出，無重複輸入 | **功能導向**: 重複輸入直到金額足夠

---

## 輸入格式 <span class="apcsStlInc">(僅 APCS Style)</span>

[前往執行畫面](#執行畫面)

### 第一階段

測資一

```
2
40
```

測資二

```
3
30
```

第一行為選擇的商品代號
第二行為投入的金額

### 第二階段

測資一

```
2
0 4 0 0
```

測資二

```
3
0 2 2 0
```

第一行為選擇的商品代號
第二行為 50 ~ 1 之間每個級距的硬幣分別投入多少個

---

## 執行畫面

[前往功能導向執行畫面](#功能導向)

### <span class="apcsStlInc">APCS Style</span>

#### 第一階段

測資一

```
1   35
2   40
3   45
4   30
2
40
Thank you!
```

測資二

```
1   35
2   40
3   45
4   30
3
30
You still need $15 to purchase this
```

先輸出商品代號和價格，然後開始讓使用者輸入\
商品代號和價格之間用 tab 字元間隔，使用者要在新的一行輸入

#### 第二階段

1.

```
1   35
2   40
3   45
4   30
2
0 4 0 0
Thank you!
```

2.

```
1   35
2   40
3   45
4   30
3
0 2 2 0
You still need $15 to purchase this
```

### 功能導向

#### 第一階段

```
#   Name        Cost
1   Tea         35
2   Americano   40
3   Milk tea    45
4   Sport drink 30

Please enter the number of the drink you want to buy: 2
Pay: 40
Thank you!
```

```
#   Name        Cost
1   Tea         35
2   Americano   40
3   Milk tea    45
4   Sport drink 30

Please enter the number of the drink you want to buy: 3
Pay: 30
You still need $15 to purchase this
Pay: 5
You still need $10 to purchase this
Pay: 10
Thank you!
```


#### 第二階段

```
#   Name        Cost
1   Tea         35
2   Americano   40
3   Milk tea    45
4   Sport drink 30

Please enter the number of the drink you want to buy: 2
Pay 50x0    10x4    5x0 1x0
Thank you!
```

```
#   Name        Cost
1   Tea         35
2   Americano   40
3   Milk tea    45
4   Sport drink 30

Please enter the number of the drink you want to buy: 3
Pay 50x0   10x2 5x2    1x0
You still need $15 to purchase this
Pay 50x0   10x0    5x1 1x0
You still need $10 to purchase this
Pay 50x0   10x1    5x0 1x0
Thank you!
```