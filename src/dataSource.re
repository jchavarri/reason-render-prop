type blog = {
  id: int,
  text: string,
  comments: list(string)
};

type data = array(blog);

let db = [|
  {
    id: 1,
    text: "A Zombie once bit Chuck Norris. He was immediatly healed back to life.. Then Chuck Norris killed him.",
    comments: ["Woah", "This is great"]
  },
  {
    id: 2,
    text: "Jack Nicholson tells Chuck Norris that he \"CAN handle the truth\"",
    comments: ["True true", "Mosdef"]
  },
  {
    id: 3,
    text: "Chuck Norris always gets a 21 while playing blackjack no matter how many times he \"hits\".",
    comments: ["Really?", "No way"]
  },
  {
    id: 4,
    text: "Chuck Norris told The Fox what to say.",
    comments: ["For real", "Can't believe this"]
  }
|];

let currentIndex = ref(0);

let tick = () => {
  currentIndex := Js.Math.random_int(0, Array.length(db));
  Js.log(db[currentIndex^])
};

Js.Global.setInterval(tick, 1000);