add_executable(Battleship
                    main.cpp
                    test.cpp test.h
                    init.cpp init.h
                    game.cpp game.inl game.h
                    utils.cpp utils.h)

target_link_libraries(Battleship GameObjects Sea)
