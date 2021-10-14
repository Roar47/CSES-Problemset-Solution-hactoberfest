const IntroductoryProblems = document.getElementById("Introductory Problems");
const SearchingSorting = document.getElementById("Searching and Sorting");
const DynamicProgramming = document.getElementById("Dynamic Programming");
const Graphs = document.getElementById("Graphs");

let questions = [];
var section = { 'Introductory Problems.json': IntroductoryProblems, 
                'Searching and Sorting.json': SearchingSorting , 
                'Dynamic Programming.json': DynamicProgramming, 
                'Graphs.json': Graphs
              };
function fetchData(address,content)
{
    fetch(address)
    .then((res) => {
        return res.json();
    })
    .then((loadedQuestions) => {
        questions = loadedQuestions;
        print(content);
    })
    .catch((err) => {
        console.error(err);
    });
} 
print = (param) => {
    for(var i = 0; i<questions.length;i++)
    {
        var div = document.createElement('div');
        div.innerHTML = `<a href= ${questions[i].solution} target="_blank">
            <button class="btn btn-secondary" type="button">
                ${questions[i].Question}
            </button>
        </a>`
        param.appendChild(div);
    }
}
for (var address of Object.keys(section)) {
    fetchData(address,section[address]);
}



