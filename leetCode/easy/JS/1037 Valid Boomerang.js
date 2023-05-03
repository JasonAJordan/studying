var isBoomerang = function([[ax,ay],[bx,by],[cx,cy]]) {
  // only tricky part is modifying the input so we can use the points
  // Here we just find the vector
  return ((by-ay)*(cx-bx)!==(cy-by)*(bx-ax));
};