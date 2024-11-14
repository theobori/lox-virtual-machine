{
  stdenv,
  lib,
  cmake,
}:
stdenv.mkDerivation {
  pname = "clox";
  version = "0.0.1";

  src = ./.;

  nativeBuildInputs = [ cmake ];

  meta = {
    description = "This is a bytecode virtual machine for the Lox language";
    homepage = "https://github.com/theobori/lox-virtual-machine";
    license = lib.licenses.mit;
    mainProgram = "clox";
  };
}
