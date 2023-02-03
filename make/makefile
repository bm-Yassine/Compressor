

# put here the path to your header files:
source=%code_cat


.PHONY: clean
 

__ : final-report.pdf
	echo "done"

# concatenate report with doxygen documentation
# final-report.pdf : report.pdf refman.pdf
final-report.pdf : refman.pdf
# pdftk ./latex/refman.pdf cat output final-report.pdf
	mv ./latex/refman.pdf final-report.pdf

# report compilation
# report.pdf : report.tex
# 	pdflatex report
# 	bibtex   report
# 	pdflatex report
# 	pdflatex report

# doxygen compilation
refman.pdf : $(source)/bipartite.h $(source)/bipartite.cpp $(source)/main.cpp Doxyfile
	doxygen 
	$(MAKE) -C latex
# cp ./latex/refman.pdf .
	
# generate configuration file for doxygen
Doxyfile : 
	doxygen -g 	
	mv Doxyfile doxy
	cat doxy | sed -e 's/INPUT[ \t]\+=/INPUT = $(source)/g' | sed -e 's/UML_LOOK[ \t]\+=[ \t]\+NO/UML_LOOK = YES/g' | sed -e 's/PROJECT_NAME[ \t]\+=[ \t]\+"My Project"/PROJECT_NAME = "Fundamentals of Computer Programming: Project"/g' | sed -e 's/FULL_PATH_NAMES[ \t]\+=[ \t]\+YES/FULL_PATH_NAMES = NO/g'  | sed -s 's/GENERATE_HTML[ \t]\+=[ \t]\+YES/GENERATE_HTML = NO/g' | sed -s 's/SOURCE_BROWSER[ \t]\+=[ \t]\+NO/SOURCE_BROWSER = YES/g'| sed -s 's/INLINE_SOURCES[ \t]\+=[ \t]\+NO/INLINE_SOURCES = YES/g'> Doxyfile 
	rm doxy 
	
# remove temporary files
clean : 	
	for f in `ls doxy Doxyfile *.aux *.log *.out *.gz *.bib *.blg *.bbl *.o *~ refman.pdf report.pdf` ; do  if [ -f $$f ] ; then rm $$f  ; fi; done; 
	if [ -d latex ] ; then rm -r latex ; fi ;
	if [ -d html ]  ; then rm -r html  ; fi ;
	
		
	
	


