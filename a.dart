void main() {
  List<String> s = ['ss', 'pp', 'zz', 'aa'];
  s.sort((a, b) => a.compareTo("pp") );
  print(s);
}
