open Jest;

describe("some test", () =>
  test("passes!", () =>
    Expect.(expect(true) |> toBe(0))
  )
);
