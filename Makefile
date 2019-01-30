.PHONY: clean All

All:
	@echo "----------Building project:[ Mystring-operator-functions - Debug ]----------"
	@cd "Debug_practice_operators\Mystring-operator-functions" && "$(MAKE)" -f  "Mystring-operator-functions.mk"
clean:
	@echo "----------Cleaning project:[ Mystring-operator-functions - Debug ]----------"
	@cd "Debug_practice_operators\Mystring-operator-functions" && "$(MAKE)" -f  "Mystring-operator-functions.mk" clean
