project(clox)

set(CLOX_BIN "clox")

set(CLOX_SRC
  chunk.c
  compiler.c
  debug.c
  line.c
  main.c
  memory.c
  object.c
  scanner.c
  stack.c
  table.c
  value.c
  vm.c
)

add_executable(${CLOX_BIN} ${CLOX_SRC})

install(TARGETS ${CLOX_BIN} DESTINATION bin)
