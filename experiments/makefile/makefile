all: generate generate2

generate:
	@echo "Creating text file..."
	@touch textfile.txt
	@echo "Writing to created file..."
	@echo asdf1234 >textfile.txt
	@tput setaf 2; echo "Completed!"; tput sgr0

generate2:
	@echo "Creating second option..."
	@touch option2.txt
	@tput setaf 2; echo "Completed!"; tput sgr0

clean:
	@tput setaf 1; echo "Cleaning up files..."; tput sgr0
	@rm textfile.txt
	@rm option2.txt
	@tput setaf 2; echo "Completed!"; tput sgr0
