#!/usr/bin/node
exports.esrever = function (list) {
  let gen = list.length - 1;
  let h = 0;
  while ((gen - h) > 0) {
    const aux = list[gen];
    list[gen] = list[h];
    list[h] = aux;
    h++;
    gen--;
  }
  return list;
};
