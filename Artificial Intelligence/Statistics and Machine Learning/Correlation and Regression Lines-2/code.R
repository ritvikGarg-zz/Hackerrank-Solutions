phy <- c(15,12,8,8,7,7,7,6,5,3)
history <- c(10,25,17,11,13,17,20,13,9,15)

fit <- lm(history ~ phy)
cat(round(fit$coefficients[[2]],3))

