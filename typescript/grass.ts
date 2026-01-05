import { Metaclass } from "./metaclass";

export class Grass implements Metaclass {
  readonly type = "grass";

  describe() {
    return {
      height: "10cm",
      color: "green",
      density: "medium",
      growthCondition: "humid",
      interaction: ["trample", "cut"]
    };
  }
}
