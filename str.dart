

Stream<int> boatStream() async* {
  for (var i = 0; i < 1100000; i++) {
    print("Sent boat no :- ${i.toString()}");
    await Future.delayed(
      Duration(milliseconds:10 ),
    );
    yield i;
  }
}

void main(List<String> args) {
  Stream<int> stream = boatStream();
  stream.listen((i) {
    print("Received boat no ${i.toString()}");
    print(" ");
  });
}

