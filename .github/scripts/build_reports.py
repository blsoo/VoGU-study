from report_builder import build_lab
from lab3_spec import SPEC as S3
from lab4_spec import SPEC as S4
from lab5_spec import SPEC as S5
from postprocess_reports import postprocess

# Rebuild the verified variant-8 reports from the checked C++ sources.
for n, spec in ((3, S3), (4, S4), (5, S5)):
    build_lab(n, spec)

postprocess()
