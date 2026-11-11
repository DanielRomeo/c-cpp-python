## Abstract factory design pattern

### What is what?

- client = main
- Abstract factory (interface) = GUIFactory - the blueprint declaring what family of creation methods must exist.
- Concrete factories = WinFactory and MacFactory - Factories that implment the blueprint, bundling together a specific family of matching products.
- Abstract products (Interface) = Button & checkbox - Its a template that define what the individual product type can do. e.g paint() method.
- Concrete product = WinButton, WinCheckbox, MacButton - The actual platform specific items being created/ rendered on mac/windows.